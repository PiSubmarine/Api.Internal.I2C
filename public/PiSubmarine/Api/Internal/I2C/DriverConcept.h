#pragma once

#include "PiSubmarine/Api/Internal/I2C/Callback.h"

namespace PiSubmarine::Api::Internal::I2C
{
	template<typename T>
	concept DriverConcept = requires(T driver, uint8_t deviceAddress, uint8_t * txData, uint8_t * rxData, size_t len, Callback callback)
	{
		{ driver.Write(deviceAddress, txData, len) } -> std::same_as<bool>;
		{ driver.Read(deviceAddress, rxData, len) } -> std::same_as<bool>;
		{ driver.WriteAsync(deviceAddress, txData, len, callback) } -> std::same_as<bool>;
		{ driver.ReadAsync(deviceAddress, rxData, len, callback) } -> std::same_as<bool>;
	};

}