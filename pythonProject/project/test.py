class ExampleClass:
    var_1 = 1

    def __init__(self):
        self.var_2 = 1


a = ExampleClass()
b = ExampleClass()

print(a.var_1)
print(b.var_1)

ExampleClass.var_1 = 2
a.var_1 = 3 # 이렇게 쓰면 안됨

print(a.var_1)
print(b.var_1)

c = ExampleClass()

print(c.var_1)

print(a.var_2, b.var_2)

a.var_2 = 4
print(a.var_2, b.var_2)