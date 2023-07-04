#include "include/build_version.h"

#include "leveldb/db.h"
#include <iostream>

int main(int argc, char** argv) {
  std::cout << "Hello, World!, " << build_compile_date << std::endl;
  leveldb::DB* db;
  leveldb::Options options;
  options.create_if_missing = true;
  leveldb::Status status = leveldb::DB::Open(options, "debug/db", &db);
  delete db;
  return 0;
}
