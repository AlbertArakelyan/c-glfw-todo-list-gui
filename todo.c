#include <GLFW/glfw3.h>
#include <leif/leif.h>

#define WIN_MARGIN 20.0f

static int winw = 1280, winh = 720;
static LfFont titleFont;

int main() {
  glfwInit();

  GLFWwindow* window = glfwCreateWindow(winw, winh, "Todo", NULL, NULL);

  glfwMakeContextCurrent(window);

  lf_init_glfw(winw, winh, window);

  LfTheme theme = lf_get_theme();
  theme.div_props.color = LF_NO_COLOR;
  lf_set_theme(theme);

  titleFont = lf_load_font("./fonts/inter-bold.ttf", 40);

  while(!glfwWindowShouldClose(window)) {
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0.1f, 0.1f, 0.1f, 1.0f);

    lf_begin();

    lf_div_begin(((vec2s){WIN_MARGIN, WIN_MARGIN}), ((vec2s){winw - WIN_MARGIN * 2.0f, winh - WIN_MARGIN * 2.0f}), true);

    lf_push_font(&titleFont); // Texts inside will use the mentioned font
    lf_text("Your To Do");
    lf_pop_font(); // Texts inside will use the mentioned font

    lf_div_end();
    lf_end();

    glfwPollEvents();
    glfwSwapBuffers(window);
  }

  lf_free_font(&titleFont);

  glfwDestroyWindow(window);
  glfwTerminate();

  return 0;
}

