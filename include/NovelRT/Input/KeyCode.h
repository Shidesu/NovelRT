// Copyright © Matt Jones and Contributors. Licensed under the MIT Licence (MIT). See LICENCE.md in the repository root for more information.

#ifndef NOVELRT_INPUT_KEYCODE_H
#define NOVELRT_INPUT_KEYCODE_H
#ifndef NOVELRT_H
#error Please do not include this directly. Use the centralised header (NovelRT.h) instead!
#endif

namespace NovelRT::Input {
  enum class KeyCode : int32_t {
    Nothing = SDLK_UNKNOWN,
    LeftMouseButton = 323,
    RightMouseButton = 324,
    Enter = SDLK_RETURN,
    Escape = SDLK_ESCAPE,
    Backspace = SDLK_BACKSPACE,
    Tab = SDLK_TAB,
    Spacebar = SDLK_SPACE,
    ExclamationMark = SDLK_EXCLAIM,
    DoubleQuote = SDLK_QUOTEDBL,
    Hash = SDLK_HASH,
    Percent = SDLK_PERCENT,
    Dollar = SDLK_DOLLAR,
    Ampersand = SDLK_AMPERSAND,
    SingleQuote = SDLK_QUOTE,
    LeftBracket = SDLK_LEFTPAREN,
    RightBracket = SDLK_RIGHTPAREN,
    Asterisk = SDLK_ASTERISK,
    Plus = SDLK_PLUS,
    Comma = SDLK_COMMA,
    Minus = SDLK_MINUS,
    FullStop = SDLK_PERIOD,
    ForwardSlash = SDLK_SLASH,

    Zero = SDLK_0,
    One = SDLK_1,
    Two = SDLK_2,
    Three = SDLK_3,
    Four = SDLK_4,
    Five = SDLK_5,
    Six = SDLK_6,
    Seven = SDLK_7,
    Eight = SDLK_8,
    Nine = SDLK_9,

    Colon = SDLK_COLON,
    Semicolon = SDLK_SEMICOLON,
    LessThan = SDLK_LESS,
    Equals = SDLK_EQUALS,
    GreaterThan = SDLK_GREATER,
    QuestionMark = SDLK_QUESTION,
    AtSymbol = SDLK_AT,
    LeftSquareBracket = SDLK_LEFTBRACKET,
    BackSlash = SDLK_BACKSLASH,
    RightSquareBracket = SDLK_RIGHTBRACKET,
    Caret = SDLK_CARET,
    Underscore = SDLK_UNDERSCORE,
    BackQuote = SDLK_BACKQUOTE,

    A = SDLK_a,
    B = SDLK_b,
    C = SDLK_c,
    D = SDLK_d,
    E = SDLK_e,
    F = SDLK_f,
    G = SDLK_g,
    H = SDLK_h,
    I = SDLK_i,
    J = SDLK_j,
    K = SDLK_k,
    L = SDLK_l,
    M = SDLK_m,
    N = SDLK_n,
    O = SDLK_o,
    P = SDLK_p,
    Q = SDLK_q,
    R = SDLK_r,
    S = SDLK_s,
    T = SDLK_t,
    U = SDLK_u,
    V = SDLK_v,
    W = SDLK_w,
    X = SDLK_x,
    Y = SDLK_y,
    Z = SDLK_z,

    CapsLock = SDLK_CAPSLOCK,

    F1 = SDLK_F1,
    F2 = SDLK_F2,
    F3 = SDLK_F3,
    F4 = SDLK_F4,
    F5 = SDLK_F5,
    F6 = SDLK_F6,
    F7 = SDLK_F7,
    F8 = SDLK_F8,
    F9 = SDLK_F9,
    F10 = SDLK_F10,
    F11 = SDLK_F11,
    F12 = SDLK_F12,
    F13 = SDLK_F13,
    F14 = SDLK_F14,
    F15 = SDLK_F15,
    F16 = SDLK_F16,
    F17 = SDLK_F17,
    F18 = SDLK_F18,
    F19 = SDLK_F19,
    F20 = SDLK_F20,
    F21 = SDLK_F21,
    F22 = SDLK_F22,
    F23 = SDLK_F23,
    F24 = SDLK_F24,


    PrintScreen = SDLK_PRINTSCREEN,
    ScrollLock = SDLK_SCROLLLOCK,
    PauseBreak = SDLK_PAUSE,
    Insert = SDLK_INSERT,
    Home = SDLK_HOME,
    PageUp = SDLK_PAGEUP,
    Delete = SDLK_DELETE,
    End = SDLK_END,
    PageDown = SDLK_PAGEDOWN,

    RightArrow = SDLK_RIGHT,
    LeftArrow = SDLK_LEFT,
    DownArrow = SDLK_DOWN,
    UpArrow = SDLK_UP,

    NumLock = SDLK_NUMLOCKCLEAR,
    NumPadDivide = SDLK_KP_DIVIDE,
    NumPadMultiply = SDLK_KP_MULTIPLY,
    NumPadMinus = SDLK_KP_MINUS,
    NumPadPlus = SDLK_KP_PLUS,
    NumPadEnter = SDLK_KP_ENTER,
    NumPadOne = SDLK_KP_1,
    NumPadTwo = SDLK_KP_2,
    NumPadThree = SDLK_KP_3,
    NumPadFour = SDLK_KP_4,
    NumPadFive = SDLK_KP_5,
    NumPadSix = SDLK_KP_6,
    NumPadSeven = SDLK_KP_7,
    NumPadEight = SDLK_KP_8,
    NumPadNine = SDLK_KP_9,
    NumPadZero = SDLK_KP_0,
    NumPadFullStop = SDLK_KP_PERIOD,
    NumPadEquals = SDLK_KP_EQUALS,
    NumPadComma = SDLK_KP_COMMA,
    NumPadEqualsAs400 = SDLK_KP_EQUALSAS400,

    ContextMenu = SDLK_APPLICATION,
    PowerKey = SDLK_POWER,
    ExecuteKey = SDLK_EXECUTE,
    MenuKey = SDLK_MENU,
    SelectKey = SDLK_SELECT,
    StopKey = SDLK_STOP,
    AgainKey = SDLK_AGAIN,
    UndoKey = SDLK_UNDO,
    CutKey = SDLK_CUT,
    CopyKey = SDLK_COPY,
    PasteKey = SDLK_PASTE,
    FindKey = SDLK_FIND,
    MuteKey = SDLK_MUTE,
    VolumeUp = SDLK_VOLUMEUP,
    VolumeDown = SDLK_VOLUMEDOWN




  };
}
#endif //NOVELRT_INPUT_KEYCODE_H
