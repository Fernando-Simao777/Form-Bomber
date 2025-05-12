# Form-Bomber
Geração de dados aleatórios valídos para colocar em formulários incovenientes e proteger sua privacidade

![teste](https://upload.wikimedia.org/wikipedia/commons/thumb/c/c4/Orange-Fruit-Pieces.jpg/1200px-Orange-Fruit-Pieces.jpg)


# Geração de dados aleatórios

## Nome
O nome é até que facíl de gerar, normalmente os formulários só checam se você inseriu letras de forma correta (Sem números, caractes especiais etc).

## Email
A checagem de Email também é bem preguiçosa, geralmente colocando qualquer coisa antes de um "@gmail.com" funciona.

## CPF
Aqui que realmente as coisas começam a ficar complicadas. O CPF tem um calculo matématico de seus 11 digítos e varias características para sua checagem, operando de tal forma:

    1- Remover caracteres não numéricos.

    2- Verificar se tem 11 dígitos e não é uma sequência repetida.

    3- Calcular o primeiro dígito verificador.

    4- Calcular o segundo dígito verificador.

    5- Comparar com os dígitos informados.


### Quantidade de algarimos
Todo CPF DEVE ter 11 números sem excessão.


### Soma
A soma dos dígitos do cpf sempre resulta em um número com dois algarismos iguais "55" "66" etc;

Como exemplo vou usar um CPF falso para demonstrar isso: 493.285.958-94

4+9+3+2+8+5+9+5+8+9+4
=
66

### Nono digito
O nono digíto fala sobre a origem de tal CPF:

0- Rio Grande do Sul

![Mapa digito 0](https://sdmntprsouthcentralus.oaiusercontent.com/files/00000000-a020-61f7-a082-ded2ba109d49/raw?se=2025-05-12T03%3A57%3A05Z&sp=r&sv=2024-08-04&sr=b&scid=00000000-0000-0000-0000-000000000000&skoid=732f244e-db13-47c3-bcc7-7ee02a9397bc&sktid=a48cca56-e6da-484e-a814-9c849652bcb3&skt=2025-05-11T10%3A01%3A35Z&ske=2025-05-12T10%3A01%3A35Z&sks=b&skv=2024-08-04&sig=FJa3OsqoNNuAruG7qpI8X0XYTALN29BMRC%2BGBjRpafc%3D)

1- Distrito Federal - Goias - Mato grosso - Mato Grosso do Sul - Tocantins
2- Pará - Amazonas - Acre - Amapá - Rondônia - Roraima
3- Ceará - Maranhão - Piauí
4- Pernambuco - Rio grande so Norte - Paraíba - Alagoas
5- Bahia - Sergipe
6- Minas Gerais
7- Rio de Janeiro - Espírito Santo
8- São Paulo
9- Paraná - Santa Catarina

### Primeiro Digito Verificador

### Segundo Digito Verificador

## Telefone
