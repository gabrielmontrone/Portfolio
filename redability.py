import cs50

# Text Input:
texto = cs50.get_string("Texto: ")

# Início da contagem (lembrando que precisamos 
# contar a última palavra):
letras = 0
palavras = 1 
sentencas = 0

# Loop para fazer a contagem dentro do texto:
# A função len() retorna o comprimento de um objeto:
for c in range(len(texto)): 
    
    # isalpha() confere se é caracter é alfabeto:
    if texto[c].isalpha():   
        letras += 1
    
    # isspace() confere se é espaço:    
    elif texto[c].isspace():
        palavras += 1
        
    # conferência manual do que marcas sentenças:
    elif texto[c] == '.' or texto[c] == '!' or texto[c] == '?':
        sentencas += 1
        
# Preparando as variáveis da fórmula: 
L = letras / palavras * 100
S = sentencas / palavras * 100

# Índice Coleman-Liau:
index = 0.0588 * L - 0.296 * S - 15.8
index = round(index)

if index > 16:
    print("Grade 16+")
elif index > 1 and index < 17:
    print(f"Grade {index}")
else:
    print("Before Grade 1")
       
