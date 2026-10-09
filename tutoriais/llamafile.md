## [llamafile](https://docs.mozilla.ai/llamafile)
Distribua e execute LLMs com um único arquivo.

- https://github.com/mozilla-ai/llamafile
- https://huggingface.co/Qwen/Qwen3.8-27B

**IMPORTANTE**
Crie o Arquivo.bat com o conteúdo abaixo:
```
@echo off
.\llamafile.exe --server --model "qwen3-4b-thinking-2507.Q4_K_M.gguf" -ngl 0
pause
```
