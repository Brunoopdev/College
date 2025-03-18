#a identação tem que estar perfeita, caso contrário, não funciona
class Livro:
    def __init__(self, titulo, autor, isbn, ano, editora=None):
        self.__titulo = titulo
        self.__autor = autor
        self.__isbn = isbn
        self.__ano = ano
        self.__editora = editora
        
        
    #método getter, sempre recebe o property
    @property
    def titulo(self):
        return self.__titulo
    
    #método setter --> Esse recebe um atributo e não possui o @property
    @titulo.setter
    def titulo(self, titulo):
        self.__titulo = titulo

    @property 
    def autor(self):
        return self.__autor
    
    @autor.setter
    def autor(self, autor):
        self.__autor = autor
        
    @property 
    def isbn(self):
        return self.__isbn
            
    @isbn.setter
    def isbn(self,isbn):
        self.__isbn = isbn
                
    @property
    def ano(self):
        return self.__ano
                
    @ano.setter
    def ano(self,ano):
        self.__ano = ano
                
    @property
    def editora(self):
        return self.__editora
                
    @editora.setter
    def editora(self,editora):
        self.__editora = editora
        
#Cria uma instância da classe Livro
livro1 = Livro("Memórias Póstumas de Brás Cubas", "Machado de Assis", "978-85-359-0277-0", 1881)



class Emprestimo:
    def __init__(self,nomeLivro, codigoLivro, nomeUsuario, documentoUsuario, diaEmprestimo, diaDevolucao= None):
        self.__nomeLivro = nomeLivro
        self.__codigoLivro = codigoLivro
        self.__nomeUsuario = nomeUsuario
        self.__documentoUsuario = documentoUsuario
        self.__diaEmprestado = diaEmprestimo
        self.__diaDevolucao = diaDevolucao
        
    @property
    def nomeLivro(self):
        return self.__nomeLivro
    
    @nomeLivro.setter
    def nomeLivro(self, nomeLivro):
        self.__nomeLivro = nomeLivro
        
    @property
    def codigoLivro(self):   
        return self.__codigoLivro
     
    @codigoLivro.setter
    def codigoLivro(self, codigoLivro):
        self.__codigoLivro = codigoLivro
    
    @property
    def nomeUsuario(self):
        return self.__nomeUsuario
    
    @nomeUsuario.setter
    def nomeUsuario(self,nomeUsuario):
        self.__nomeUsuario = nomeUsuario
        
    @property
    def documentoUsuario(self):
        return self.__documentoUsuario
    
    @documentoUsuario.setter
    def documentoUsuario(self, documentoUsuario):
        self.__documentoUsuario = documentoUsuario
        
    @property
    def diaEmprestimo(self):
        return self.__diaEmprestimo
    
    @diaEmprestimo.setter
    def diaEmprestimo(self, diaEmprestimo):
        self.__diaEmprestimo = diaEmprestimo
    
    @property
    def diaDevolucao(self):
        return self.__diaDevolucao
    
    @diaDevolucao.setter
    def diaDevolucao(self,diaDevolucao):
        self.__diaDevolucao = diaDevolucao
        
emprestimo1 = Emprestimo("Memorias postúmas de bras cubas", 1, "Bruno Oliveira Paes", 123456789, "19/11/2025")

print(emprestimo1.documentoUsuario)