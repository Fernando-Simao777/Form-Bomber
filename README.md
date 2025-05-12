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

https://upload.wikimedia.org/wikipedia/commons/thumb/c/c4/Orange-Fruit-Pieces.jpg/1200px-Orange-Fruit-Pieces.jpg

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
