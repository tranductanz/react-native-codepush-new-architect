/**
 * This code was generated by [react-native-codegen](https://www.npmjs.com/package/react-native-codegen).
 *
 * Do not edit this file as changes may cause incorrect behavior and will be lost
 * once the code is regenerated.
 *
 * @generated by codegen project: GenerateModuleH.js
 */

#pragma once

#include <ReactCommon/TurboModule.h>
#include <react/bridging/Bridging.h>

namespace facebook::react {


#pragma mark - NativeScriptManagerNormalizedScriptLocatorHTTPMethod

enum class NativeScriptManagerNormalizedScriptLocatorHTTPMethod { GET, POST };

template <>
struct Bridging<NativeScriptManagerNormalizedScriptLocatorHTTPMethod> {
  static NativeScriptManagerNormalizedScriptLocatorHTTPMethod fromJs(jsi::Runtime &rt, const jsi::String &rawValue) {
    std::string value = rawValue.utf8(rt);
    if (value == "GET") {
      return NativeScriptManagerNormalizedScriptLocatorHTTPMethod::GET;
    } else if (value == "POST") {
      return NativeScriptManagerNormalizedScriptLocatorHTTPMethod::POST;
    } else {
      throw jsi::JSError(rt, "No appropriate enum member found for value");
    }
  }

  static jsi::String toJs(jsi::Runtime &rt, NativeScriptManagerNormalizedScriptLocatorHTTPMethod value) {
    if (value == NativeScriptManagerNormalizedScriptLocatorHTTPMethod::GET) {
      return bridging::toJs(rt, "GET");
    } else if (value == NativeScriptManagerNormalizedScriptLocatorHTTPMethod::POST) {
      return bridging::toJs(rt, "POST");
    } else {
      throw jsi::JSError(rt, "No appropriate enum member found for enum value");
    }
  }
};

#pragma mark - NativeScriptManagerNormalizedScriptLocatorSignatureVerificationMode

enum class NativeScriptManagerNormalizedScriptLocatorSignatureVerificationMode { STRICT, LAX, OFF };

template <>
struct Bridging<NativeScriptManagerNormalizedScriptLocatorSignatureVerificationMode> {
  static NativeScriptManagerNormalizedScriptLocatorSignatureVerificationMode fromJs(jsi::Runtime &rt, const jsi::String &rawValue) {
    std::string value = rawValue.utf8(rt);
    if (value == "strict") {
      return NativeScriptManagerNormalizedScriptLocatorSignatureVerificationMode::STRICT;
    } else if (value == "lax") {
      return NativeScriptManagerNormalizedScriptLocatorSignatureVerificationMode::LAX;
    } else if (value == "off") {
      return NativeScriptManagerNormalizedScriptLocatorSignatureVerificationMode::OFF;
    } else {
      throw jsi::JSError(rt, "No appropriate enum member found for value");
    }
  }

  static jsi::String toJs(jsi::Runtime &rt, NativeScriptManagerNormalizedScriptLocatorSignatureVerificationMode value) {
    if (value == NativeScriptManagerNormalizedScriptLocatorSignatureVerificationMode::STRICT) {
      return bridging::toJs(rt, "strict");
    } else if (value == NativeScriptManagerNormalizedScriptLocatorSignatureVerificationMode::LAX) {
      return bridging::toJs(rt, "lax");
    } else if (value == NativeScriptManagerNormalizedScriptLocatorSignatureVerificationMode::OFF) {
      return bridging::toJs(rt, "off");
    } else {
      throw jsi::JSError(rt, "No appropriate enum member found for enum value");
    }
  }
};
  
#pragma mark - NativeScriptManagerNormalizedScriptLocator

template <typename P0, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9>
struct NativeScriptManagerNormalizedScriptLocator {
  P0 uniqueId;
  P1 method;
  P2 url;
  P3 fetch;
  P4 timeout;
  P5 absolute;
  P6 query;
  P7 headers;
  P8 body;
  P9 verifyScriptSignature;
  bool operator==(const NativeScriptManagerNormalizedScriptLocator &other) const {
    return uniqueId == other.uniqueId && method == other.method && url == other.url && fetch == other.fetch && timeout == other.timeout && absolute == other.absolute && query == other.query && headers == other.headers && body == other.body && verifyScriptSignature == other.verifyScriptSignature;
  }
};

template <typename T>
struct NativeScriptManagerNormalizedScriptLocatorBridging {
  static T types;

  static T fromJs(
      jsi::Runtime &rt,
      const jsi::Object &value,
      const std::shared_ptr<CallInvoker> &jsInvoker) {
    T result{
      bridging::fromJs<decltype(types.uniqueId)>(rt, value.getProperty(rt, "uniqueId"), jsInvoker),
      bridging::fromJs<decltype(types.method)>(rt, value.getProperty(rt, "method"), jsInvoker),
      bridging::fromJs<decltype(types.url)>(rt, value.getProperty(rt, "url"), jsInvoker),
      bridging::fromJs<decltype(types.fetch)>(rt, value.getProperty(rt, "fetch"), jsInvoker),
      bridging::fromJs<decltype(types.timeout)>(rt, value.getProperty(rt, "timeout"), jsInvoker),
      bridging::fromJs<decltype(types.absolute)>(rt, value.getProperty(rt, "absolute"), jsInvoker),
      bridging::fromJs<decltype(types.query)>(rt, value.getProperty(rt, "query"), jsInvoker),
      bridging::fromJs<decltype(types.headers)>(rt, value.getProperty(rt, "headers"), jsInvoker),
      bridging::fromJs<decltype(types.body)>(rt, value.getProperty(rt, "body"), jsInvoker),
      bridging::fromJs<decltype(types.verifyScriptSignature)>(rt, value.getProperty(rt, "verifyScriptSignature"), jsInvoker)};
    return result;
  }

#ifdef DEBUG
  static jsi::String uniqueIdToJs(jsi::Runtime &rt, decltype(types.uniqueId) value) {
    return bridging::toJs(rt, value);
  }

  static jsi::String methodToJs(jsi::Runtime &rt, decltype(types.method) value) {
    return bridging::toJs(rt, value);
  }

  static jsi::String urlToJs(jsi::Runtime &rt, decltype(types.url) value) {
    return bridging::toJs(rt, value);
  }

  static bool fetchToJs(jsi::Runtime &rt, decltype(types.fetch) value) {
    return bridging::toJs(rt, value);
  }

  static double timeoutToJs(jsi::Runtime &rt, decltype(types.timeout) value) {
    return bridging::toJs(rt, value);
  }

  static bool absoluteToJs(jsi::Runtime &rt, decltype(types.absolute) value) {
    return bridging::toJs(rt, value);
  }

  static std::optional<jsi::String> queryToJs(jsi::Runtime &rt, decltype(types.query) value) {
    return bridging::toJs(rt, value);
  }

  static std::optional<jsi::Object> headersToJs(jsi::Runtime &rt, decltype(types.headers) value) {
    return bridging::toJs(rt, value);
  }

  static std::optional<jsi::String> bodyToJs(jsi::Runtime &rt, decltype(types.body) value) {
    return bridging::toJs(rt, value);
  }

  static jsi::String verifyScriptSignatureToJs(jsi::Runtime &rt, decltype(types.verifyScriptSignature) value) {
    return bridging::toJs(rt, value);
  }
#endif

  static jsi::Object toJs(
      jsi::Runtime &rt,
      const T &value,
      const std::shared_ptr<CallInvoker> &jsInvoker) {
    auto result = facebook::jsi::Object(rt);
    result.setProperty(rt, "uniqueId", bridging::toJs(rt, value.uniqueId, jsInvoker));
    result.setProperty(rt, "method", bridging::toJs(rt, value.method, jsInvoker));
    result.setProperty(rt, "url", bridging::toJs(rt, value.url, jsInvoker));
    result.setProperty(rt, "fetch", bridging::toJs(rt, value.fetch, jsInvoker));
    result.setProperty(rt, "timeout", bridging::toJs(rt, value.timeout, jsInvoker));
    result.setProperty(rt, "absolute", bridging::toJs(rt, value.absolute, jsInvoker));
    result.setProperty(rt, "query", bridging::toJs(rt, value.query, jsInvoker));
    result.setProperty(rt, "headers", bridging::toJs(rt, value.headers, jsInvoker));
    result.setProperty(rt, "body", bridging::toJs(rt, value.body, jsInvoker));
    result.setProperty(rt, "verifyScriptSignature", bridging::toJs(rt, value.verifyScriptSignature, jsInvoker));
    return result;
  }
};

class JSI_EXPORT NativeScriptManagerCxxSpecJSI : public TurboModule {
protected:
  NativeScriptManagerCxxSpecJSI(std::shared_ptr<CallInvoker> jsInvoker);

public:
  virtual jsi::Value loadScript(jsi::Runtime &rt, jsi::String scriptId, jsi::Object scriptConfig) = 0;
  virtual jsi::Value prefetchScript(jsi::Runtime &rt, jsi::String scriptId, jsi::Object scriptConfig) = 0;
  virtual jsi::Value invalidateScripts(jsi::Runtime &rt, jsi::Array scripts) = 0;
  virtual bool unstable_evaluateScript(jsi::Runtime &rt, jsi::String scriptSource, jsi::String scriptSourceUrl) = 0;

};

template <typename T>
class JSI_EXPORT NativeScriptManagerCxxSpec : public TurboModule {
public:
  jsi::Value create(jsi::Runtime &rt, const jsi::PropNameID &propName) override {
    return delegate_.create(rt, propName);
  }

  std::vector<jsi::PropNameID> getPropertyNames(jsi::Runtime& runtime) override {
    return delegate_.getPropertyNames(runtime);
  }

  static constexpr std::string_view kModuleName = "ScriptManager";

protected:
  NativeScriptManagerCxxSpec(std::shared_ptr<CallInvoker> jsInvoker)
    : TurboModule(std::string{NativeScriptManagerCxxSpec::kModuleName}, jsInvoker),
      delegate_(reinterpret_cast<T*>(this), jsInvoker) {}


private:
  class Delegate : public NativeScriptManagerCxxSpecJSI {
  public:
    Delegate(T *instance, std::shared_ptr<CallInvoker> jsInvoker) :
      NativeScriptManagerCxxSpecJSI(std::move(jsInvoker)), instance_(instance) {

    }

    jsi::Value loadScript(jsi::Runtime &rt, jsi::String scriptId, jsi::Object scriptConfig) override {
      static_assert(
          bridging::getParameterCount(&T::loadScript) == 3,
          "Expected loadScript(...) to have 3 parameters");

      return bridging::callFromJs<jsi::Value>(
          rt, &T::loadScript, jsInvoker_, instance_, std::move(scriptId), std::move(scriptConfig));
    }
    jsi::Value prefetchScript(jsi::Runtime &rt, jsi::String scriptId, jsi::Object scriptConfig) override {
      static_assert(
          bridging::getParameterCount(&T::prefetchScript) == 3,
          "Expected prefetchScript(...) to have 3 parameters");

      return bridging::callFromJs<jsi::Value>(
          rt, &T::prefetchScript, jsInvoker_, instance_, std::move(scriptId), std::move(scriptConfig));
    }
    jsi::Value invalidateScripts(jsi::Runtime &rt, jsi::Array scripts) override {
      static_assert(
          bridging::getParameterCount(&T::invalidateScripts) == 2,
          "Expected invalidateScripts(...) to have 2 parameters");

      return bridging::callFromJs<jsi::Value>(
          rt, &T::invalidateScripts, jsInvoker_, instance_, std::move(scripts));
    }
    bool unstable_evaluateScript(jsi::Runtime &rt, jsi::String scriptSource, jsi::String scriptSourceUrl) override {
      static_assert(
          bridging::getParameterCount(&T::unstable_evaluateScript) == 3,
          "Expected unstable_evaluateScript(...) to have 3 parameters");

      return bridging::callFromJs<bool>(
          rt, &T::unstable_evaluateScript, jsInvoker_, instance_, std::move(scriptSource), std::move(scriptSourceUrl));
    }

  private:
    friend class NativeScriptManagerCxxSpec;
    T *instance_;
  };

  Delegate delegate_;
};

} // namespace facebook::react
