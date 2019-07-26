#include "napi.h"
#include "tree_sitter/parser.h"

using namespace v8;

extern "C" TSLanguage * tree_sitter_biber();

namespace {

Napi::Object Init(Napi::Env env, Napi::Object exports) {



  return exports;
}

NODE_API_MODULE(NODE_GYP_MODULE_NAME, Init)



// void Init(Local<Object> exports, Local<Object> module) {
//   Local<FunctionTemplate> tpl = Nan::New<FunctionTemplate>(New);
//
//
//
//   tpl->SetClassName(Nan::New("Language").ToLocalChecked());
//   tpl->InstanceTemplate()->SetInternalFieldCount(1);
//
//   Local<Function> constructor = Nan::GetFunction(tpl).ToLocalChecked();
//   Local<Object> instance = constructor->NewInstance(Nan::GetCurrentContext()).ToLocalChecked();
//   Nan::SetInternalFieldPointer(instance, 0, tree_sitter_biber());
//
//   Nan::Set(instance, Nan::New("name").ToLocalChecked(), Nan::New("biber").ToLocalChecked());
//   Nan::Set(module, Nan::New("exports").ToLocalChecked(), instance);
// }
