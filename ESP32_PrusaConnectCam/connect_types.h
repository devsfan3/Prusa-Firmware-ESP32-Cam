#pragma once

/**
 * @brief BackendAvailabilitStatus enum
 * status of backend availability
 */
enum BackendAvailabilitStatus {
  WaitForFirstConnection = 0,     ///< waiting for first connection to backend
  BackendAvailable = 1,           ///< backend is available
  BackendUnavailable = 2,         ///< backend is unavailable
};

/**
 * @brief SendDataToBackendType enum
 * type of data to send to backend
 */
enum SendDataToBackendType {
  SendPhoto = 0,                  ///< send photo to backend
  SendInfo = 1,                   ///< send device information to backend
};