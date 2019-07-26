{
    "targets": [{
        "target_name": "tree_sitter_biber_binding",
        "defines": [
            "NAPI_DISABLE_CPP_EXCEPTIONS"
        ],
        "cflags": [
            "-std=c99"
        ],
        "sources": [
            "src/parser.c",
            "src/binding.cc"
        ],
        "include_dirs": [
            "<!@(node -p \"require('node-addon-api').include\")",
            "src"
        ],
        "dependencies": [
            "<!(node -p \"require('node-addon-api').gyp\")"
        ],
    }]
}
