#include <glog/logging.h>
#include <leveldb/db.h>
#include <leveldb/iterator.h>
#include <leveldb/options.h>

#include "include/build_version.h"

int main(int argc, char** argv) {
  FLAGS_logtostdout = true;
  ::google::InitGoogleLogging(argv[0]);
  LOG(INFO) << "Hello, World!, " << build_compile_date;
  leveldb::DB* db;
  leveldb::Options options;
  options.create_if_missing = true;
  leveldb::Status status = leveldb::DB::Open(options, "debug/db", &db);
  if (!status.ok()) {
    LOG(ERROR) << "open db failed: " << status.ToString();
    return -1;
  } else {
    LOG(INFO) << "open db succeed: " << status.ToString();
  }
  leveldb::WriteOptions write_options;
  status = db->Put(write_options, "lalala", "lilili");
  if (!status.ok()) {
    LOG(ERROR) << "put failed: " << status.ToString();
    return -1;
    LOG(INFO) << "put succeed: " << status.ToString();
  } else {
  }
  leveldb::ReadOptions read_options;
  leveldb::Iterator* iterator = db->NewIterator(read_options);
  for (iterator->SeekToFirst(); iterator->Valid(); iterator->Next()) {
    LOG(INFO) << "key: " << iterator->key().ToString()
              << ", value: " << iterator->value().ToString();
  }
  if (status = iterator->status(); !status.ok()) {
    LOG(ERROR) << "iterate db failed: " << status.ToString();
  } else {
    LOG(INFO) << "iterate db succeed: " << status.ToString();
  }
  delete iterator;
  delete db;
  ::google::ShutdownGoogleLogging();
  return 0;
}
