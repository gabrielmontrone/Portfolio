import cs50

# O preço da mercadoria:

while True:
    preço = cs50.get_float("Preço: ")
    if preço > 0:
        break
    
# O valor pago pelo cliente:

while True:
    pago = cs50.get_float("Pago: ")
    if pago < preço:
        print("O valor dado pelo cliente é inferior ao preço da compra.")
    else:
        break
    
troco = (pago - preço)
print(f"Troco: R${troco}")

a = int(troco / 200)
print(f"R$200: {a}")

b = int((troco - (a * 200))/100)
print(f"R$100: {b}")

c = int((troco - ((a * 200) + (b * 100)))/50)
print(f"R$50: {c}")

d = int((troco - ((a * 200) + (b *100) + (c * 50)))/20)
print(f"R$20: {d}")

e = int((troco - ((a * 200) + (b *100) + (c * 50) + (d * 20)))/10)
(f"R$10: {e}")

f = int((troco - ((a * 200) + (b *100) + (c * 50) + (d * 20) + (e * 10)))/5)
print(f"R$5: {f}")

g = int((troco - ((a * 200) + (b *100) + (c * 50) + (d * 20) + (e * 10) + (f * 5)))/2)
print(f"R$2: {g}")

h = int((troco - ((a * 200) + (b *100) + (c * 50) + (d * 20) + (e * 10) + (f * 5) + (g * 2)))/1)
print(f"R$1: {h}")

