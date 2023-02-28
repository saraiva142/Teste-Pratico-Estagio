import json
import numpy as np
import pandas as pd

f = open('dados.json')
dados = json.load(f)

dataframe = pd.DataFrame.from_dict(dados)

dataframe = dataframe[dataframe["valor"] != 0]

menor = min(dataframe["valor"])

maior = max(dataframe["valor"])

media = np.mean(dataframe["valor"])
media_superior = np.count_nonzero(dataframe["valor"] > media)

print()
print("===Faturamento=Diário=De=Uma=Distribuidora===")
print()

print("O menor valor de faturamento ocorrido em um dia do mês: [", menor,"]")
print()

print("O maior valor de faturamento ocorrido em um dia do mês: [", maior,"]")
print()

print("Número de dias no mês em que o valor de faturamento diário foi superior à média mensal: [", media_superior,"]")
print()