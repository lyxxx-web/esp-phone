
idf_component_register(
    SRC_DIRS 
        "."
        "./ui"
        "./ui/screens"
        "./ui/fonts"
        "./ui/images"
        "./app"
        "./custom_widgets"
        "./svg_display"

    INCLUDE_DIRS 
        "."
        "./ui"
        "./app"
        "./custom_widgets"
        "./svg_display"
    )

spiffs_create_partition_assets(
    svg
    "../svg_assets"
    FLASH_IN_PROJECT
    MMAP_FILE_SUPPORT_FORMAT ".svg"
)
