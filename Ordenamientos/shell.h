#ifndef SHELL_H
#define SHELL_H

template <class T>
class ShellSort
{
  private:
    int x = 0;
    int vectorSHS[20];
    int gap;
    int debut;
  public:
    ShellSort();
    void shell(T* vector);
    void auxShell(T* vectorSHS, int gap, int debut);
    ~ShellSort();
};
#endif // SHELL_H
