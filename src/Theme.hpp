#pragma once
// Sakura theme: every color and themed sprite lives here.
// Change a value below and the whole mod follows.
#include <Geode/Geode.hpp>

namespace theme {
    // ---- Palette ----
    inline constexpr cocos2d::ccColor3B kPink     = { 255, 158, 207 }; // titles, highlights (#FF9ECF)
    inline constexpr cocos2d::ccColor3B kAccent   = { 255, 120, 190 }; // "active" / live values (#FF78BE)
    inline constexpr cocos2d::ccColor3B kLavender = { 205, 180, 255 }; // secondary text (#CDB4FF)
    inline constexpr cocos2d::ccColor3B kMuted    = { 200, 180, 215 }; // hints, file paths
    inline constexpr cocos2d::ccColor3B kWarn     = { 255, 105, 140 }; // dirty / out-of-date values
    inline constexpr cocos2d::ccColor4F kMarker   = { 1.f, 0.62f, 0.81f, 1.f }; // default in-game marker

    // ---- Sprites (shipped in resources/, see mod.json) ----
    inline constexpr auto kPopupBg  = "sakura_popup.png"_spr;   // popup window background
    inline constexpr auto kButtonBg = "sakura_button.png"_spr;  // button background
    inline constexpr auto kRowBg    = "sakura_row.png"_spr;     // list row background

    inline constexpr auto kFont      = "bigFont.fnt";
    inline constexpr auto kTitleFont = "bigFont.fnt";

    // Themed text button (drop-in for ButtonSprite::create("Text")).
    inline ButtonSprite* button(const char* text, float scale = 1.f) {
        return ButtonSprite::create(text, kFont, kButtonBg, scale);
    }

    // Recolor a popup title after setTitle().
    template <class T>
    inline void styleTitle(T* title) {
        if (title) title->setColor(kPink);
    }
}
