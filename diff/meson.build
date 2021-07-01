diff = executable('diff',
    ['diff.c', 'diffdir.c', 'diffreg.c'],
    include_directories: [sysdefs, icompat],
    link_with: [libcompat],
    install: true,
)

install_man('diff.1')
