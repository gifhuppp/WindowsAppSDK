// Copyright (c) Microsoft Corporation and Contributors.
// Licensed under the MIT License.

#include "pch.h"

#include "M.W.F.DecimalHelper.h"
#include "Microsoft.Windows.Foundation.DecimalHelper.g.cpp"

#include "decimal.h"
#include "decimalcppwinrt.h"

namespace winrt::Microsoft::Windows::Foundation::implementation
{
    winrt::Microsoft::Windows::Foundation::DecimalValue DecimalHelper::FromBoolean(bool value)
    {
        return to_DecimalValue(::Microsoft::Windows::Foundation::decimal(value));
    }
    winrt::Microsoft::Windows::Foundation::DecimalValue DecimalHelper::FromInt16(int16_t value)
    {
        return to_DecimalValue(::Microsoft::Windows::Foundation::decimal(value));
    }
    winrt::Microsoft::Windows::Foundation::DecimalValue DecimalHelper::FromInt32(int32_t value)
    {
        return to_DecimalValue(::Microsoft::Windows::Foundation::decimal(value));
    }
    winrt::Microsoft::Windows::Foundation::DecimalValue DecimalHelper::FromInt64(int64_t value)
    {
        return to_DecimalValue(::Microsoft::Windows::Foundation::decimal(value));
    }
    winrt::Microsoft::Windows::Foundation::DecimalValue DecimalHelper::FromUInt8(uint8_t value)
    {
        return to_DecimalValue(::Microsoft::Windows::Foundation::decimal(value));
    }
    winrt::Microsoft::Windows::Foundation::DecimalValue DecimalHelper::FromUInt16(uint16_t value)
    {
        return to_DecimalValue(::Microsoft::Windows::Foundation::decimal(value));
    }
    winrt::Microsoft::Windows::Foundation::DecimalValue DecimalHelper::FromUInt32(uint32_t value)
    {
        return to_DecimalValue(::Microsoft::Windows::Foundation::decimal(value));
    }
    winrt::Microsoft::Windows::Foundation::DecimalValue DecimalHelper::FromUInt64(uint64_t value)
    {
        return to_DecimalValue(::Microsoft::Windows::Foundation::decimal(value));
    }
    winrt::Microsoft::Windows::Foundation::DecimalValue DecimalHelper::FromSingle(float value)
    {
        return to_DecimalValue(::Microsoft::Windows::Foundation::decimal(value));
    }
    winrt::Microsoft::Windows::Foundation::DecimalValue DecimalHelper::FromDouble(double value)
    {
        return to_DecimalValue(::Microsoft::Windows::Foundation::decimal(value));
    }
    winrt::Microsoft::Windows::Foundation::DecimalValue DecimalHelper::FromString(hstring const& value)
    {
        return to_DecimalValue(::Microsoft::Windows::Foundation::decimal(value));
    }
    winrt::Microsoft::Windows::Foundation::DecimalValue DecimalHelper::FromStringWithSystemDefaultLocale(hstring const& value)
    {
        return to_DecimalValue(::Microsoft::Windows::Foundation::decimal(value));
    }
    winrt::Microsoft::Windows::Foundation::DecimalValue DecimalHelper::FromStringWithUserDefaultLocale(hstring const& value)
    {
        return to_DecimalValue(::Microsoft::Windows::Foundation::decimal(value));
    }
    winrt::Microsoft::Windows::Foundation::DecimalValue DecimalHelper::FromStringWithThreadLocale(hstring const& value)
    {
        return to_DecimalValue(::Microsoft::Windows::Foundation::decimal(value));
    }
    bool DecimalHelper::ToBoolean(winrt::Microsoft::Windows::Foundation::DecimalValue const& value)
    {
        return winrt::Microsoft::Windows::Foundation::to_decimal(value).to_bool();
    }
    int16_t DecimalHelper::ToInt16(winrt::Microsoft::Windows::Foundation::DecimalValue const& value)
    {
        return winrt::Microsoft::Windows::Foundation::to_decimal(value).to_int16();
    }
    int32_t DecimalHelper::ToInt32(winrt::Microsoft::Windows::Foundation::DecimalValue const& value)
    {
        return winrt::Microsoft::Windows::Foundation::to_decimal(value).to_int32();
    }
    int64_t DecimalHelper::ToInt64(winrt::Microsoft::Windows::Foundation::DecimalValue const& value)
    {
        return winrt::Microsoft::Windows::Foundation::to_decimal(value).to_int64();
    }
    uint8_t DecimalHelper::ToUInt8(winrt::Microsoft::Windows::Foundation::DecimalValue const& value)
    {
        return winrt::Microsoft::Windows::Foundation::to_decimal(value).to_uint8();
    }
    uint16_t DecimalHelper::ToUInt16(winrt::Microsoft::Windows::Foundation::DecimalValue const& value)
    {
        return winrt::Microsoft::Windows::Foundation::to_decimal(value).to_uint16();
    }
    uint32_t DecimalHelper::ToUInt32(winrt::Microsoft::Windows::Foundation::DecimalValue const& value)
    {
        return winrt::Microsoft::Windows::Foundation::to_decimal(value).to_uint32();
    }
    uint64_t DecimalHelper::ToUInt64(winrt::Microsoft::Windows::Foundation::DecimalValue const& value)
    {
        return winrt::Microsoft::Windows::Foundation::to_decimal(value).to_uint64();
    }
    float DecimalHelper::ToSingle(winrt::Microsoft::Windows::Foundation::DecimalValue const& value)
    {
        return winrt::Microsoft::Windows::Foundation::to_decimal(value).to_float();
    }
    double DecimalHelper::ToDouble(winrt::Microsoft::Windows::Foundation::DecimalValue const& value)
    {
        return winrt::Microsoft::Windows::Foundation::to_decimal(value).to_double();
    }
    hstring DecimalHelper::ToString(winrt::Microsoft::Windows::Foundation::DecimalValue const& value)
    {
        return winrt::Microsoft::Windows::Foundation::to_decimal(value).to_hstring();
    }
    hstring DecimalHelper::ToStringWithSystemDefaultLocale(winrt::Microsoft::Windows::Foundation::DecimalValue const& value)
    {
        return winrt::Microsoft::Windows::Foundation::to_decimal(value).to_hstring(LOCALE_SYSTEM_DEFAULT);
    }
    hstring DecimalHelper::ToStringWithUserDefaultLocale(winrt::Microsoft::Windows::Foundation::DecimalValue const& value)
    {
        return winrt::Microsoft::Windows::Foundation::to_decimal(value).to_hstring(LOCALE_USER_DEFAULT);
    }
    hstring DecimalHelper::ToStringWithThreadLocale(winrt::Microsoft::Windows::Foundation::DecimalValue const& value)
    {
        return winrt::Microsoft::Windows::Foundation::to_decimal(value).to_hstring(GetThreadLocale());
    }
    bool DecimalHelper::Equals(winrt::Microsoft::Windows::Foundation::DecimalValue const& left, winrt::Microsoft::Windows::Foundation::DecimalValue const& right)
    {
        return left == right;
    }
    int32_t DecimalHelper::Compare(winrt::Microsoft::Windows::Foundation::DecimalValue const& left, winrt::Microsoft::Windows::Foundation::DecimalValue const& right)
    {
        return to_decimal(left).compare(to_decimal(right));
    }
    bool DecimalHelper::IsValid(winrt::Microsoft::Windows::Foundation::DecimalValue const& value)
    {
        return winrt::Microsoft::Windows::Foundation::is_valid(value);
    }
    uint32_t DecimalHelper::Scale(winrt::Microsoft::Windows::Foundation::DecimalValue const& value)
    {
        return value.Scale;
    }
    int32_t DecimalHelper::Sign(winrt::Microsoft::Windows::Foundation::DecimalValue const& value)
    {
        return ((value.Lo64 == 0) && (value.Hi32 == 0)) ? 0 : (value.Sign != 0 ? -1 : 1);
    }
    uint32_t DecimalHelper::MaxScale()
    {
        return ::Microsoft::Windows::Foundation::decimal::max_scale();
    }
    winrt::Microsoft::Windows::Foundation::DecimalValue DecimalHelper::MaxValue()
    {
        return to_DecimalValue(::Microsoft::Windows::Foundation::decimal::max_value());
    }
    winrt::Microsoft::Windows::Foundation::DecimalValue DecimalHelper::MinValue()
    {
        return to_DecimalValue(::Microsoft::Windows::Foundation::decimal::min_value());
    }
    winrt::Microsoft::Windows::Foundation::DecimalValue DecimalHelper::Negate(winrt::Microsoft::Windows::Foundation::DecimalValue const& value)
    {
        return to_DecimalValue(-to_decimal(value));
    }
    winrt::Microsoft::Windows::Foundation::DecimalValue DecimalHelper::Abs(winrt::Microsoft::Windows::Foundation::DecimalValue const& value)
    {
        return to_DecimalValue(to_decimal(value).abs());
    }
    winrt::Microsoft::Windows::Foundation::DecimalValue DecimalHelper::Truncate(winrt::Microsoft::Windows::Foundation::DecimalValue const& value)
    {
        return to_DecimalValue(to_decimal(value).truncate());
    }
    winrt::Microsoft::Windows::Foundation::DecimalValue DecimalHelper::Floor(winrt::Microsoft::Windows::Foundation::DecimalValue const& value)
    {
        return to_DecimalValue(to_decimal(value).floor());
    }
    winrt::Microsoft::Windows::Foundation::DecimalValue DecimalHelper::Ceiling(winrt::Microsoft::Windows::Foundation::DecimalValue const& value)
    {
        return to_DecimalValue(to_decimal(value).ceil());
    }
    winrt::Microsoft::Windows::Foundation::DecimalValue DecimalHelper::Round(winrt::Microsoft::Windows::Foundation::DecimalValue const& value, int32_t decimalPlaces)
    {
        return to_DecimalValue(to_decimal(value).round(decimalPlaces));
    }
    winrt::Microsoft::Windows::Foundation::DecimalValue DecimalHelper::Clamp(winrt::Microsoft::Windows::Foundation::DecimalValue const& value, winrt::Microsoft::Windows::Foundation::DecimalValue const& min, winrt::Microsoft::Windows::Foundation::DecimalValue const& max)
    {
        return to_DecimalValue(to_decimal(value).clamp(to_decimal(min), to_decimal(max)));
    }
    winrt::Microsoft::Windows::Foundation::DecimalValue DecimalHelper::Add(winrt::Microsoft::Windows::Foundation::DecimalValue const& left, winrt::Microsoft::Windows::Foundation::DecimalValue const& right)
    {
        return to_DecimalValue(to_decimal(left) + to_decimal(right));
    }
    winrt::Microsoft::Windows::Foundation::DecimalValue DecimalHelper::Subtract(winrt::Microsoft::Windows::Foundation::DecimalValue const& left, winrt::Microsoft::Windows::Foundation::DecimalValue const& right)
    {
        return to_DecimalValue(to_decimal(left) - to_decimal(right));
    }
    winrt::Microsoft::Windows::Foundation::DecimalValue DecimalHelper::Multiply(winrt::Microsoft::Windows::Foundation::DecimalValue const& left, winrt::Microsoft::Windows::Foundation::DecimalValue const& right)
    {
        return to_DecimalValue(to_decimal(left) * to_decimal(right));
    }
    winrt::Microsoft::Windows::Foundation::DecimalValue DecimalHelper::Divide(winrt::Microsoft::Windows::Foundation::DecimalValue const& left, winrt::Microsoft::Windows::Foundation::DecimalValue const& right)
    {
        return to_DecimalValue(to_decimal(left) / to_decimal(right));
    }
    winrt::Microsoft::Windows::Foundation::DecimalValue DecimalHelper::Modulo(winrt::Microsoft::Windows::Foundation::DecimalValue const& left, winrt::Microsoft::Windows::Foundation::DecimalValue const& right)
    {
        return to_DecimalValue(to_decimal(left) % to_decimal(right));
    }
}
