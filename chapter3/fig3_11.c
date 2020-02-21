/*
 * * Draws a stick figure
 * */

# include <stdio.h>    //printf defination

/*   function prototypes       */

  void draw_circle(void);           /* Draws a circle */
  
  void draw_intersect(void);        /* Draws intersecting lines */

  void draw_base(void);             /*draws base line */

  void draw_triangle(void);         /* draws triangle*/

 int
 main(void)

{
	/*draw circle*/
	draw_circle();
 
  	/*draw triangle*/
	draw_triangle();
  
  	/*draw intersecting lines*/
	draw_intersect();

	return(0);

}


/*
 * * Draws a circle
 * */

void
 draw_circle(void)
{
	printf("    *   \n");
	printf("  *   * \n");
	printf("   * *  \n");

}

/*
 * * Draws intersecting lines
 * */

void
draw_intersect(void)
{
  printf("  / \\  \n");
  printf(" /   \\ \n");
  printf("/     \\\n");

}

/*
 * * Draws a base line
 * */

void
draw_base(void)
{
	printf("-------\n");
}

/*
 * * Draws a triangle
 * */

void
draw_triangle(void)
{
   draw_intersect();
   draw_base();

} 
