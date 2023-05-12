salario_base, horas_extra, bonificacion = [float(n) for n in input().split()]

valor_hora = salario_base/192.0
valor_horas_extra = 1.25*valor_hora*horas_extra
salario_total= salario_base*(1+bonificacion*0.05)+ valor_horas_extra 

salario_total -= (0.085)*salario_total
print(round(salario_total,1))
