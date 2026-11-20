# 🎬 HuMo AI

## 📌 O que é o HuMo AI?
O **HuMo** (*Human-Centric Video Generation via Collaborative Multi-Modal Conditioning*) é um framework avançado de geração de vídeo de código aberto, desenvolvido em colaboração pela Tsinghua University e pela equipe de Criação Inteligente da ByteDance. Sua filosofia central é o **controle granular e a coerência multimodal**: diferentemente de geradores de vídeo genéricos, o HuMo é especializado em criar vídeos de alta qualidade focados em seres humanos, garantindo que a aparência do sujeito (preservação de identidade), o movimento e o áudio permaneçam perfeitamente sincronizados e alinhados com os prompts de texto e imagens de referência fornecidos.

- **Categoria:** Geração de Vídeo Centrada no Ser Humano (IA Multimodal)
- **Plataforma:** Linux (Python/PyTorch) / ComfyUI / Android (App relacionado)
- **Palavras-chave:** Geração de Vídeo, IA Multimodal, Sincronia Audiovisual, Preservação de Identidade, Código Aberto, Tsinghua University, ByteDance

---

## ✨ Principais Destaques
- **Condicionamento Multimodal Flexível:** Suporta três modos principais de geração:
  1. **Texto + Imagem:** Personaliza aparência, roupas e cenário usando uma imagem de referência e um prompt de texto.
  2. **Texto + Áudio:** Gera vídeos com sincronia labial e de movimentos corporais alinhados ao áudio, sem necessidade de imagem de referência.
  3. **Texto + Imagem + Áudio:** O nível máximo de controle, combinando identidade visual, direção textual e sincronia sonora.
- **Preservação Rigorosa do Sujeito:** Mantém a consistência da identidade (rosto, características) e dos acessórios ao longo de todo o vídeo, mesmo com mudanças de ângulo de câmera ou iluminação.
- **Sincronia Audiovisual de Alta Fidelidade:** Utiliza codificadores de áudio avançados (como Whisper) para garantir que os movimentos gerados (como fala ou gestos) estejam perfeitamente sincronizados com a faixa de áudio de entrada.
- **Ecossistema Aberto e Acessível:** Disponibiliza pesos de modelos (incluindo uma versão leve de 1.7B para GPUs de 32GB e uma versão de 17B para alta qualidade), códigos de inferência e o dataset *HuMoSet* (670K vídeos) para a comunidade.

---

## 🚀 Instalação e Primeiros Passos

O HuMo é primariamente um projeto de pesquisa com foco em execução via linha de comando ou integração com fluxos de trabalho como o ComfyUI.

**Opção 1: Instalação via Python (Linux/GPU)**
1. Crie um ambiente virtual e instale as dependências (requer PyTorch com suporte a CUDA):
   ```bash
   conda create -n humo python=3.11
   conda activate humo
   pip install torch==2.5.1 torchvision==0.20.1 torchaudio==2.5.1 --index-url https://download.pytorch.org/whl/cu124
   pip install flash_attn==2.6.3
   pip install -r requirements.txt
   ```
2. Baixe os pesos dos modelos (ex: HuMo-1.7B ou 17B, Wan-2.1 VAE, Whisper) via `huggingface-cli`.
3. Execute a inferência usando os scripts fornecidos (ex: `bash scripts/infer_tia.sh` para Texto+Imagem+Áudio).

**Opção 2: Integração com ComfyUI**
- O modelo HuMo-1.7B já possui suporte oficial no ComfyUI (via nós customizados como `ComfyUI-Wan`), permitindo a geração de vídeos em uma interface visual de nós, acessível até mesmo em GPUs como a RTX 3090.

**Opção 3: Aplicativo Móvel (Demo/Consumo)**
- Existe uma versão de aplicativo para Android (disponível na Play Store) que demonstra as capacidades da tecnologia para o público geral, embora o modelo de pesquisa completo seja executado via código.

---

## 📚 Links de Referência

- [Página do Projeto e Demos](https://phantom-video.github.io/HuMo/)
- [Repositório Oficial no GitHub](https://github.com/Phantom-video/HuMo)
- [Dataset HuMoSet (ModelScope)](https://modelscope.cn/datasets/leoniuschen/HuMoSet)
- [Aplicativo Relacionado na Google Play](https://play.google.com/store/apps/details?id=com.cykj.homo&hl=pt_BR)

---

### 💡 Nota sobre a Metodologia de Estudo
A arquitetura e a filosofia do **HuMo AI** oferecem analogias excepcionais para a sua metodologia de estudo de temas complexos ou longos, especialmente no ensino da matemática:

1. **Condicionamento Multimodal e a Tradução de Representações:** O HuMo brilha ao combinar texto, imagem e áudio para gerar um resultado coerente. Na matemática, a compreensão profunda exige que o aluno saiba "traduzir" um conceito entre diferentes representações: verbal (o enunciado), simbólica (a equação), gráfica (o desenho no plano cartesiano) e numérica (a tabela de valores). Incentive o aluno a não depender de apenas uma "modalidade" de estudo; se a fórmula não faz sentido, peça para ele desenhar o problema ou explicá-lo em voz alta.
2. **Preservação do Sujeito e a Consistência Lógica:** Assim como o HuMo mantém a identidade do personagem consistente do início ao fim do vídeo, uma resolução matemática deve manter a **consistência lógica** do início ao fim. O aluno não pode mudar o valor de uma variável no meio do caminho ou esquecer uma condição de existência (como o denominador não pode ser zero). Ensine-o a "travar" as premissas do problema no início e verificar se cada passo subsequente respeita essas premissas originais.
3. **Sincronia Audiovisual e a Revisão Passo a Passo:** A sincronia perfeita entre áudio e movimento no HuMo é o resultado de um alinhamento rigoroso de dados. Na resolução de problemas, o aluno deve praticar a "sincronia" entre o que ele *pensa* e o que ele *escreve*. Muitas vezes, o cérebro pula três etapas, mas a mão escreve apenas uma, gerando um erro de "sincronia" (um salto lógico não justificado). Incentive a escrita de cada micro-passo, garantindo que o "áudio" (o raciocínio interno) e o "vídeo" (o registro no papel) estejam perfeitamente alinhados.
