diff3prog = executable('diff3prog',
    ['diff3prog.c'],
    include_directories: [sysdefs],
    install: true,
    install_dir: get_option('libexecdir'),
)

install_man('diff3.1')

diff3 = custom_target('diff3-gen',
    output: ['diff3'],
    input: ['diff3.in'],
    command: [
        meson.current_source_dir() / 'gendiff3.sh',
        '@INPUT@', '@OUTPUT@',
        get_option('prefix') / get_option('bindir'),
        get_option('prefix') / get_option('libexecdir')
    ],
    install: true,
    install_dir: get_option('bindir'),
    install_mode: 'rwxr-xr-x',
)
