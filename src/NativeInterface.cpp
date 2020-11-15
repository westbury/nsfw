#include "../includes/NativeInterface.h"

NativeInterface::NativeInterface(const std::string &path, const bool followSymlinks, std::shared_ptr<EventQueue> queue) {
  mNativeInterface.reset(new NativeImplementation(queue, path, true));
}

NativeInterface::~NativeInterface() {
  mNativeInterface.reset();
}

std::string NativeInterface::getError() {
  return mNativeInterface->getError();
}

bool NativeInterface::hasErrored() {
  return mNativeInterface->hasErrored();
}

bool NativeInterface::isWatching() {
  return mNativeInterface->isWatching();
}
