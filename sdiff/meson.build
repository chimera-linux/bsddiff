sdiff = executable('sdiff',
    ['edit.c', 'sdiff.c'],
    include_directories: [sysdefs, icompat],
    link_with: [libcompat],
    install: true,
)

install_man('sdiff.1')
