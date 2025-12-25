from huggingface_hub import hf_hub_download

hf_hub_download(
    repo_id="TheBloke/OpenHermes-2.5-Mistral-7B-GGUF",
    filename="OpenHermes-2.5-Mistral-7B.Q4_K_M.gguf",
    local_dir=".",  # current directory
    local_dir_use_symlinks=False  # ensures full file copy
)
