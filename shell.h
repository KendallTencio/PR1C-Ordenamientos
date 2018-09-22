#ifndef SHELL_H
#define SHELL_H
class ShellSort
{
  private:
    int x = 0;
    int vectorSHS[20];
    int gap;
    int debut;
  public:
    ShellSort();
    template <class T>
    void shell(T* vector);
    template <class T>
    void auxShell(T* vectorSHS, int gap, int debut);
    ~ShellSort();
};
#endif // SHELL_H
