# set(LV_DEMO_DIR ../managed_components/lvgl__lvgl/demos)
# file(GLOB_RECURSE LV_DEMOS_SOURCES ${LV_DEMO_DIR}/*.c)

idf_component_register(
    SRC_DIRS 
        "."
        "./ui"
        "./ui/screens"
        "./ui/fonts"
        "./ui/images"
        "./app"
        "./custom_widgets"

    INCLUDE_DIRS 
        "."
        "./ui"
        "./app"
        "./custom_widgets"
    )

