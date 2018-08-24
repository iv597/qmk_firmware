#!/usr/bin/env python3

emoticons = {
    # Emojis
    'FLAG_CA': r'🇨🇦',
    'FLAG_US': r'🇺🇸',
    'MAPLE_LEAF': r'🍁',
    'POOP': r'💩',

    # Emoticons, but fancier
    'TABLE_FLIP': r'(╯°□°）╯︵ ┻━┻',
    'ANGRY_TABLE_FLIP': r'(ノಠ痊ಠ)ノ彡┻━┻',
    'SHRUGGIE': r'¯\_(ツ)_/¯',
}

if __name__ == '__main__':
    print(r'#define IBUS_MACRO(z) SEND_STRING(SS_LCTRL("U")); SEND_STRING(z"\n")')
    for name, output in emoticons.items():
        commands = []

        chars = [
            s.encode('unicode-escape')
                .decode('ascii')
                .replace(r'\u', '')
                .replace(r'\U', '')
                .replace(r'\x', '')
                .lstrip('0')
            for s in output
        ]

        for char in chars:
            if len(char) == 1:
                commands.append(f'SEND_STRING("{char}");')
            else:
                commands.append(f'IBUS_MACRO("{char}");')

        joined_commands = ' '.join(commands)
        print(f'#define EMOTE_{name}() {joined_commands}')
