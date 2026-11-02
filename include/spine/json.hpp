#pragma once

#include "spine/object.hpp"

namespace spine {

class Json : public SpineObject {
  friend class SkeletonJson;

public:
  static const int JSON_FALSE;
  static const int JSON_TRUE;
  static const int JSON_NULL;
  static const int JSON_NUMBER;
  static const int JSON_STRING;
  static const int JSON_ARRAY;
  static const int JSON_OBJECT;

  static Json* getItem(Json* object, const char* name);
  static Json* getItem(Json* object, int index);
  static const char* getString(Json* object, const char* name,
                               const char* fallback);
  static float getFloat(Json* object, const char* name, float fallback);
  static int getInt(Json* object, const char* name, int fallback);
  static bool getBoolean(Json* object, const char* name, bool fallback);
  static const char* getError();

  explicit Json(const char* value);
  ~Json() override;

private:
  static const char* _error;

  Json* _next;
  Json* _child;
  int _type;
  int _size;
  const char* _valueString;
  int _valueInt;
  float _valueFloat;
  const char* _name;

  static const char* skip(const char* value);
  static const char* parseValue(Json* item, const char* value);
  static const char* parseString(Json* item, const char* value);
  static const char* parseNumber(Json* item, const char* value);
  static const char* parseArray(Json* item, const char* value);
  static const char* parseObject(Json* item, const char* value);
  static int json_strcasecmp(const char* left, const char* right);
};

static_assert(sizeof(Json) == 56);

}
