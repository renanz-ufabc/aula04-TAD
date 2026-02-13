# Template de Projeto C da AED-I

Este é um template de projeto C amigável para iniciantes, projetado para ajudar estudantes a programar em C com ferramentas modernas e boas práticas.

## Estrutura do Projeto

```
.
├── Makefile         # Configuração de automação de build
├── README.md        # Documentação do projeto (este arquivo)
├── src/
│   └── main.c       # Arquivo principal em C
└── build/           # Binários compilados (criado após o build)
    └── main         # Executável gerado
```

## Compilando o Projeto

Este projeto usa o GNU Make para automatizar o processo de build. A compilação utiliza:
- **Compilador**: clang
- **Padrão C**: C20 (`-std=c2x`)
- **Flags**: `-Wall` (habilita todos os warnings)

### Comandos de Build

```bash
# Compila o projeto (alvo padrão)
make

# Ou executa explicitamente o alvo 'all'
make all

# Limpa os artefatos de build
make clean
```

## Executando o Projeto

```bash
# Compila e executa em um comando
make run

# Ou executa diretamente o binário (após compilar)
./build/main
```

## Alvos do Makefile

| Alvo | Descrição |
|------|-----------|
| `all` | Compila o projeto e cria o executável |
| `run` | Compila o projeto e executa o programa |
| `clean` | Remove o diretório `build/` |

## Objetivos de Aprendizagem

Este template demonstra:
- ✅ C moderno (padrão C20)
- ✅ Fundamentos de Makefile para automação de build
- ✅ Flags de compilador e warnings
- ✅ Organização de diretórios do projeto
- ✅ Criação e execução de executáveis

## Primeiros Passos

1. **Edite** `src/main.c` com seu código em C
2. **Compile** com `make`
3. **Execute** com `./build/main`
4. **Limpe** com `make clean`

## Dicas para Estudantes

- Sempre compile com warnings (`-Wall`) para capturar possíveis bugs
- Use um padrão moderno como C20 para aprender boas práticas atuais
- Mantenha seus arquivos fonte no diretório `src/`
- Use `make clean` antes de mudanças grandes para garantir um build limpo
- Estude o `Makefile` para entender como a compilação é automatizada

## Ambiente de Desenvolvimento

Este projeto está configurado para rodar em um **Dev Container do VS Code** usando Docker e Alpine Linux. O ambiente inclui um conjunto completo de ferramentas e bibliotecas para desenvolvimento em C.

### Ferramentas de Desenvolvimento

| Ferramenta | Finalidade |
|-----------|------------|
| **clang** | Compilador C moderno com ótimos diagnósticos |
| **build-base** | Ferramentas básicas de build (gcc, make, libc dev) |
| **cmake** | Sistema de build avançado para projetos maiores |
| **git** | Sistema de controle de versão |
| **gdb** | Depurador GNU para executáveis |
| **clang-extra-tools** | Utilitários e linters adicionais do clang |
| **valgrind** | Profiling de memória e detecção de vazamentos |

### Configuração do Ambiente

Para rodar este projeto:
1. Abra no VS Code com a extensão Dev Containers instalada
2. A pasta `.devcontainer/` configura o ambiente Docker automaticamente
3. Todas as ferramentas já vêm instaladas e prontas para uso
