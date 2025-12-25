from pytube import YouTube
import sys
from urllib.parse import urlparse, parse_qs

def sanitize_url(url):
    """Remove unnecessary query parameters from the URL (e.g., ?si=...)"""
    if "youtu.be" in url:
        # Convert short URL to full format
        video_id = urlparse(url).path.strip("/")
        return f"https://www.youtube.com/watch?v={video_id}"
    if "&" in url:
        return url.split("&")[0]  # Remove extra tracking parameters
    return url

def download_youtube_video():
    try:
        # Step 1: Ask for YouTube URL
        raw_url = input("Enter the YouTube video link: ").strip()
        url = sanitize_url(raw_url)
        
        # Initialize YouTube object
        yt = YouTube(url)
        print(f"\nTitle: {yt.title}")
        print(f"Author: {yt.author}\n")

        # Step 2: Show available stream resolutions
        print("Available video streams:")
        video_streams = yt.streams.filter(progressive=True, file_extension='mp4').order_by('resolution').desc()

        resolutions = []
        for i, stream in enumerate(video_streams):
            print(f"{i+1}. {stream.resolution}")
            resolutions.append(stream)

        if not resolutions:
            print("❌ No downloadable video streams found.")
            return

        # Step 3: Ask user to pick a resolution
        choice = input("\nChoose a format by number (e.g., 1 for highest quality): ")
        if not choice.isdigit() or int(choice) < 1 or int(choice) > len(resolutions):
            print("❌ Invalid choice. Exiting.")
            return

        stream = resolutions[int(choice) - 1]

        # Step 4: Download
        print(f"\n📥 Downloading: {yt.title} in {stream.resolution}...")
        stream.download()
        print("✅ Download complete!")

    except Exception as e:
        print(f"\n❌ Error: {e}")
        sys.exit(1)

if __name__ == "__main__":
    download_youtube_video()
