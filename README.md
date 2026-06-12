# 🍔 Cyber Club - Sistema de Lanchonete

![C](https://img.shields.io/badge/Linguagem-C-blue)
![Status](https://img.shields.io/badge/Status-Concluído-success)

Bem-vindo ao repositório do **Cyber Club**! Este é um sistema de lanchonete interativo desenvolvido em linguagem **C**, projetado para rodar diretamente no terminal. Ele simula o atendimento de uma lanchonete com temática *cyberpunk*, oferecendo menus ricos e opções de customização de pedidos.

---

## 📋 Funcionalidades

- **Menu Principal Interativo:** Iniciar novo pedido `[N]`, fechar conta `[E]` ou sair do sistema `[S]`.
- **Cardápio Categorizado:** Bebidas (Café, Suco, Energético, Refrigerante, Água), Lanches (Esfirra, Pastel, Hambúrguer, Coxinha) e Sobremesas.
- **Customização Futurista:** Possibilidade de adicionar complementos exóticos aos lanches e bebidas (ex: gelo com LED, espuma molecular, queijo neon, molho de plasma).
- **Fechamento de Conta (Checkout):** Cálculo automático da quantidade de itens pedidos e valor total a ser pago.

---

## 🚀 Como Executar

**Pré-requisitos:** Você precisará de um compilador C (como o `gcc` via MinGW) instalado no seu sistema Windows, já que o código utiliza bibliotecas específicas (`<windows.h>`).

1. **Clone o repositório:**
   ```bash
   git clone https://github.com/SeuUsuario/CyberClub.git
   cd CyberClub
   ```

2. **Compile o código:**
   ```bash
   gcc cyber_club.c -o cyber_club
   ```

3. **Execute o programa:**
   ```cmd
   cyber_club.exe
   ```

---

## 💻 Estrutura e Tecnologias

O programa foi construído com as seguintes estruturas da linguagem C:
- **Laços de Repetição:** `do-while` e `while` para manter a navegação contínua pelo cardápio.
- **Controle de Fluxo:** `switch/case` para a seleção de categorias e produtos.
- **Imersão Visual:** Uso da biblioteca `<windows.h>` (`system("color")`, `system("cls")`, `Sleep()`) para gerar animações e textos coloridos no prompt de comando.

---

## 👥 Autores
- Gregory Ribeiro Schein 
- Guilherme Silva

*Trabalho 2 da disciplina de Programação I.*
