#pragma once

using I2CCallback = std::function<void(uint8_t deviceAddress, bool)>;

template<typename T>
concept I2CDriverConcept = requires(T driver, uint8_t deviceAddress, uint8_t * txData, uint8_t * rxData, size_t len, I2CCallback callback)
{
	{ driver.Write(deviceAddress, txData, len) } -> std::same_as<bool>;
	{ driver.Read(deviceAddress, rxData, len) } -> std::same_as<bool>;
	{ driver.WriteAsync(deviceAddress, txData, len, callback) } -> std::same_as<bool>;
	{ driver.ReadAsync(deviceAddress, rxData, len, callback) } -> std::same_as<bool>;
};
