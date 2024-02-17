// Recursividade para impedir que o header execute mais de uma vez
#ifndef HELLO_H
#define HELLO_H

// Recursividade para evitar conflitos de nomes
namespace HELLO
{
    // Criação da classe HelloCpp
    class HelloCpp final
    {
        // Declaração da função "run"
        public:
            void run(int i);
    };
}

#endif
