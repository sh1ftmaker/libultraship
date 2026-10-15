#pragma once

#include "stdint.h"
#include "ship/Api.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Returns true if the application window is running (has not been closed). */
API_EXPORT bool WindowIsRunning();

/** @brief Returns the current width of the game window in pixels. */
API_EXPORT uint32_t WindowGetWidth();

/** @brief Returns the current height of the game window in pixels. */
API_EXPORT uint32_t WindowGetHeight();

/** @brief Returns the current aspect ratio of the game window (width / height). */
API_EXPORT float WindowGetAspectRatio();

/** @brief Returns the X position of the game window's top-left corner in screen coordinates. */
API_EXPORT int32_t WindowGetPosX();

/** @brief Returns the Y position of the game window's top-left corner in screen coordinates. */
API_EXPORT int32_t WindowGetPosY();

/** @brief Returns true if the game window is currently in fullscreen mode. */
API_EXPORT bool WindowIsFullscreen();

/**
 * @brief Tells the renderer the current view is fixed to a prerendered or panoramic background (e.g. fixed or
 * pivoting cameras). In portrait windows such views are drawn at exactly 4:3 instead of being widened, since
 * there is nothing outside the background to show.
 */
API_EXPORT void WindowSetPortraitFixedView(bool fixed);

#ifdef __cplusplus
};
#endif
