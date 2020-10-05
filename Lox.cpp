//
// Created by 王琛超 on 2020/10/2.
//

#include "Lox.h"
#include "Scanner.h"

void Lox::runFile(char* path) {
    std::ifstream file_stream(path);
    // 将文件内容放入string中
    std::string fileContent = std::string(std::istreambuf_iterator<char>(file_stream),
            std::istreambuf_iterator<char>());
    run(fileContent);
    file_stream.close();
}

void Lox::runPrompt() {
    // 从stdin一行一行读，通过command+D退出程序
    for (std::string line; std::getline(std::cin, line);) {
        run(line);
    }
}

void Lox::run(std::string &source) {
    Scanner scanner(source);
    std::vector<Token> tokens = scanner.scanTokens();
    for (auto token : tokens) {
        std::cout << token << std::endl;
    }
}

int main(int argc, char* argv[]) {
    if (argc > 2) {
        std::cout << "Usage: cpplox [script]" << std::endl;
        return 64;
    } else if (argc = 2) {
        Lox::runFile(argv[1]);
    } else {
        Lox::runPrompt();
    }
}
