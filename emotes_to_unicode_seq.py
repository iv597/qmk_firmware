#!/usr/bin/env python3

emoticons = {
    # Emojis
    'BEER': r'🍺',
    'BEER_TOAST': r'🍻',
    'FACE_CUTE_SMILE': r'😊',
    'FACE_HEART_EYES': r'😍',
    'FACE_JOY': r'😂',
    'FACE_SWEAT_SMILE': r'😅',
    'FACE_THINKING': r'🤔',
    'FIRE': r'🔥',
    'FLAG_CA': r'🇨🇦',
    'FLAG_US': r'🇺🇸',
    'HAND_CLAP': r'👏',
    'HAND_HORNS': r'🤘',
    'HAND_OK': r'👌',
    'HAND_THUMB_DOWN': r'👎',
    'HAND_THUMB_UP': r'👍',
    'HAND_WAVE': r'👋',
    'HEART': r'❤️',
    'MAPLE_LEAF': r'🍁',
    'POOP': r'💩',
    'TADA': r'🎉',

    # Emoticons, but fancier
    'ANGRY_TABLE_FLIP': r'(ノಠ痊ಠ)ノ彡┻━┻',
    'SHRUGGIE': r'¯\_(ツ)_/¯',
    'TABLE_FLIP': r'(╯°□°）╯︵ ┻━┻',
}

mappings = {
    'br': 'BEER',
    'brt': 'BEER_TOAST',

    'fcs': 'FACE_CUTE_SMILE',
    'fhe': 'FACE_HEART_EYES',
    'fj': 'FACE_JOY',
    'fss': 'FACE_SWEAT_SMILE',

    'fir': 'FIRE',

    'fca': 'FLAG_CA',
    'fus': 'FLAG_US',

    'hcl': 'HAND_CLAP',
    'hor': 'HAND_HORNS',
    'ho': 'HAND_OK',
    'htd': 'HAND_THUMB_DOWN',
    'htu': 'HAND_THUMB_UP',
    'hw': 'HAND_WAVE',

    'he': 'HEART',
    'ml': 'MAPLE_LEAF',
    'poo': 'POOP',
    'tad': 'TADA',

    'atf': 'ANGRY_TABLE_FLIP',
    'tf': 'TABLE_FLIP',

    'shr': 'SHRUGGIE',
}

len_macros = {
    1: 'SEQ_ONE_KEY(KC_{})',
    2: 'SEQ_TWO_KEYS(KC_{}, KC_{})',
    3: 'SEQ_THREE_KEYS(KC_{}, KC_{}, KC_{})',
    4: 'SEQ_FOUR_KEYS(KC_{}, KC_{}, KC_{}, KC_{})',
    5: 'SEQ_FIVE_KEYS(KC_{}, KC_{}, KC_{}, KC_{}, KC_{})',
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

    for sequence, macro in mappings.items():
        seq_macro = len_macros[len(sequence)].format(
            *[k.upper() for k in sequence]
        )

        print(f'{seq_macro} {{ EMOTE_{macro}() }}')
