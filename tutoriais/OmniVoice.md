# 🎙️ OmniVoice

## 📌 O que é o OmniVoice?
O **OmniVoice** é um modelo de Texto para Fala (TTS) *zero-shot* de última geração, desenvolvido pela equipe de pesquisa k2-fsa. Sua filosofia central é a **democratização da síntese de voz e o controle granular**: ele suporta mais de 600 idiomas com um único modelo unificado, permitindo clonar vozes com apenas 3 a 10 segundos de áudio de referência ou "projetar" vozes inteiramente novas a partir de descrições textuais (ex: "tom grave, sotaque britânico"), tudo isso sem a necessidade de treinamento pesado ou dependência de APIs pagas de grandes corporações.

- **Categoria:** Modelo de Texto para Fala (TTS) Multilíngue e Clonagem de Voz Zero-Shot
- **Plataforma:** Windows / macOS / Linux (via Python/PyTorch)
- **Palavras-chave:** OmniVoice, TTS, Clonagem de Voz, IA Local, 600+ Idiomas, Código Aberto, k2-fsa, Zero-Shot, Síntese de Fala

---

## ✨ Principais Destaques
- **Clonagem de Voz Zero-Shot:** Captura o tom, sotaque e ritmo de um falante a partir de um áudio de referência de apenas 3 a 10 segundos, replicando-o em qualquer um dos 600+ idiomas suportados.
- **Design de Voz por Texto (Voice Design):** Crie vozes do zero sem nenhum áudio de referência, apenas descrevendo atributos como gênero, idade, tom (pitch), estilo (ex: sussurro) e sotaque regional.
- **Controle Fino e Expressivo:** Suporta símbolos não-verbais inline (ex: `[laughter]`, `[sigh]`) e correção de pronúncia via fonemas (CMU para inglês, Pinyin para chinês), garantindo uma entonação natural e precisa.
- **Inferência Ultra-rápida:** Arquitetura otimizada (com suporte a FlashInfer e CUDA Graphs) que atinge velocidades de até 40x mais rápidas que o tempo real (RTF ~0.025), tornando-o viável para aplicações em tempo real.

---

## 🚀 Instalação e Primeiros Passos

O OmniVoice pode ser testado imediatamente na nuvem ou instalado localmente para total privacidade e controle.

**Opção 1: Teste Rápido (Google Colab ou Web Demo)**
- A maneira mais fácil de começar é usar o [Notebook Oficial no Google Colab](https://colab.research.google.com/github/k2-fsa/OmniVoice/blob/master/docs/OmniVoice.ipynb) ou a demo no Hugging Face, sem precisar configurar nada no seu computador.

**Opção 2: Instalação Local (Recomendada para Uso Contínuo)**
1. Crie um ambiente virtual Python (ex: `conda` ou `venv`).
2. Instale o PyTorch adequado ao seu hardware (ex: `pip install torch torchaudio --index-url https://download.pytorch.org/whl/cu128` para NVIDIA).
3. Instale o OmniVoice:
   ```bash
   pip install omnivoice
   # Ou para a versão mais recente do GitHub:
   pip install git+https://github.com/k2-fsa/OmniVoice.git
   ```

**Primeiros Passos (Via Python):**
```python
from omnivoice import OmniVoice
import soundfile as sf
import torch

# Carrega o modelo (use "mps" para Mac Apple Silicon ou "xpu" para Intel Arc)
model = OmniVoice.from_pretrained("k2-fsa/OmniVoice", device_map="cuda:0", dtype=torch.float16)

# Clonagem de Voz (o modelo transcreve o áudio de referência automaticamente se ref_text for omitido)
audio = model.generate(
    text="Olá, este é um teste de clonagem de voz multilíngue.",
    ref_audio="meu_audio_referencia.wav"
)

# Salva o resultado
sf.write("saida.wav", audio[0], 24000)
```
*Dica de fluxo:* Para acelerar drasticamente a inferência em GPUs NVIDIA, instale o `flashinfer-python` e ative-o nas configurações do modelo.

---

## 📚 Links de Referência

**Oficiais e Documentação:**
- [Site Oficial e Demo](https://omnivoice.app/)
- [Repositório Oficial (k2-fsa)](https://github.com/k2-fsa/OmniVoice)
- [Notebook Interativo no Google Colab](https://colab.research.google.com/github/k2-fsa/OmniVoice/blob/master/docs/OmniVoice.ipynb)

**Projetos da Comunidade e Interfaces:**
- [OmniVoice Audio Studio (Interface Gráfica)](https://github.com/lombardyappdesigns/OmniVoice-Audio-Studio)
- [Implementações Alternativas e Forks](https://github.com/zhu-han/OmniVoice)

---

### 💡 Nota sobre a Metodologia de Estudo
A arquitetura e a filosofia do **OmniVoice** oferecem analogias excepcionais para a sua metodologia de estudo de temas complexos ou longos, especialmente no ensino da matemática:

1. **Clonagem "Zero-Shot" e o Poder do Exemplo Prototípico:** O OmniVoice precisa de apenas 3 segundos de áudio bem escolhido para capturar a essência de uma voz, em vez de horas de treinamento. Na matemática, isso é análogo ao uso de **exemplos prototípicos**. Em vez de fazer o aluno resolver 50 exercícios mecânicos, apresente *um* exemplo perfeitamente escolhido que ilustre a estrutura profunda do conceito. Um bom exemplo "clona" o entendimento na mente do aluno muito mais rápido do que a repetição exaustiva.
2. **Design de Voz por Atributos e a Definição de Parâmetros:** Para gerar uma voz, o usuário define atributos precisos (gênero, tom, sotaque). Na resolução de problemas, o aluno deve aprender a fazer o mesmo: **definir os parâmetros e condições de contorno** antes de começar a calcular. *"Qual é o domínio desta função?", "O triângulo é retângulo ou isósceles?"*. Especificar as regras do jogo com clareza evita que o "modelo mental" do aluno gere uma solução para o problema errado.
3. **Símbolos Não-Verbais e o Rigor da Notação Matemática:** O OmniVoice permite inserir tags como `[laughter]` ou corrigir pronúncias específicas no meio do texto para alterar a saída de áudio. Isso é um paralelo direto com a **notação matemática rigorosa**. Um parêntese esquecido, um sinal de igualdade no lugar de uma seta de implicação ($\Rightarrow$), ou a omissão das condições de existência, mudam completamente a "execução" e o significado da expressão. Ensine o aluno a tratar a notação não como decoração, mas como "código de controle" que dita o comportamento exato da solução.
