<!-- markdownlint-disable MD033 --><!-- markdownlint-disable MD034 -->
# Atividade 3.1: Minicurso Git - Principais Comandos

## Enunciado

Acessar o vídeo abaixo, fazer os exercícios e os procedimentos propostos criar um arquivo com todos os comandos do git utilizados na vídeo aula, salvar a lista de comandos em um arquivo e enviar o arquivo no moodle no formato pdf.
[GIT: Minicurso para Você Sair do Zero! (Aprenda em 45 Minutos) - Código Fonte TV](https://youtu.be/ts-H3W1uLMM?si=o-6oDITXcIflCU53)

---

## Resposta

**Título:** Minicurso Git - Principais Comandos
**Autor:** Kauan Andrade  
**Data:** 29 de Agosto de 2026  

### **COMANDOS GIT**

**Configuração Inicial:**

* `git config --global user.name "Seu Nome"`: Define o nome de usuário globalmente.
* `git config --global user.email "seuemail@exemplo.com"`: Define o e-mail globalmente.
* `git config --global --list`: Lista as configurações globais.

**Repositórios:**

* `git init`: Inicializa um novo repositório Git local.
* `git clone <url>`: Clona um repositório existente para o seu computador.

**Gerenciamento de Arquivos e Status:**

* `git status`: Verifica o estado dos arquivos (trabalhando, indexados, etc.).
* `git add <arquivo>`: Adiciona um arquivo específico ao Stage.
* `git add .`: Adiciona todos os arquivos modificados ao Stage.
* `git reset <arquivo>`: Remove um arquivo do Stage (mantendo alterações locais).
* `git restore <arquivo>`: Desfaz alterações no diretório de trabalho.
* `git diff`: Mostra as diferenças entre o Stage e o diretório de trabalho.

**Commits:**

* `git commit -m "mensagem"`: Confirma as mudanças com uma mensagem.
* `git commit -a -m "mensagem"`: Adiciona e confirma as mudanças automaticamente.
* `git commit --amend -m "nova mensagem"`: Corrige o último commit.

<div style="page-break-inside: avoid;">

**Histórico:**

* `git log`: Mostra o histórico de commits.
* `git log --oneline`: Mostra o histórico de forma simplificada.
* `git log --graph`: Mostra o histórico com a visualização gráfica dos branches.
* `git log --author="Nome"`: Filtra o log por autor.
* `git reflog`: Mostra o histórico de ações realizadas no repositório.

</div>

**Branches:**

* `git branch`: Lista os branches.
* `git branch <nome>`: Cria um novo branch.
* `git checkout -b <nome>`: Cria e muda para um novo branch.
* `git branch -m <novo-nome>`: Renomeia o branch atual.
* `git branch -d <nome>`: Exclui um branch.
* `git merge <nome>`: Mescla um branch ao atual.
* `git rebase <nome>`: Aplica as mudanças de um branch na base de outro.

**Repositórios Remotos:**

* `git remote add origin <url>`: Adiciona um repositório remoto.
* `git remote -v`: Lista os repositórios remotos configurados.
* `git push -u origin <branch>`: Envia os commits para o repositório remoto.
* `git pull origin <branch>`: Traz as mudanças do repositório remoto para o local.
* `git push origin --force`: Força o envio (usado para sobrescrever histórico).

**Tags:**

* `git tag <nome>`: Cria uma tag leve.
* `git tag -a <nome> -m "mensagem"`: Cria uma tag anotada.
* `git show <tag>`: Exibe detalhes de uma tag.
