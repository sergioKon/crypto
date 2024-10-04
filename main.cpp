#include <iostream>
#include <botan/hash.h>
#include <botan/hex.h>


std::string hex_hash(const std::string& in, const std::string& HASH) {
    const std::unique_ptr hash(Botan::HashFunction::create_or_throw(HASH));
   return Botan::hex_encode(hash->process(in));
}

int main(int argc, char** argv) {
  std::cout << "---------------" <<  std::endl;
  std::cout << " md5 hash sum =  " << hex_hash("12345", "SHA-224") << std::endl;

   return 0;
}




