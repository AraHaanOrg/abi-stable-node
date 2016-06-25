#ifndef NODE_JAVASCRIPT_API_INTERNAL_H_
#define NODE_JAVASCRIPT_API_INTERNAL_H_

#include "node_jsvmapi.h"

namespace v8impl {
  napi_env JsEnvFromV8Isolate(v8::Isolate* isolate);
  v8::Isolate* V8IsolateFromJsEnv(napi_env e);

  napi_value JsValueFromV8LocalValue(v8::Local<v8::Value> local);
  v8::Local<v8::Value> V8LocalValueFromJsValue(napi_value v);
}


#endif // NODE_JAVASCRIPT_API_INTERNAL_H_

