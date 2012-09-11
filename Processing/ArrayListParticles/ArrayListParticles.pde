ArrayList<Particle> particles;

void setup() {
  size(640,360);
  particles = new ArrayList<Particle>();
  smooth();
}

void draw() {
  background(255);

  particles.add(new Particle(new PVector(width/2,50)));
  
  // Using the iterator 
  
  for(int i=0; i<particles.size(); i++){
    
    Particle p = particles.get(i);
    
    p.run();
    
    if(p.isDead()){
     particles.remove(p); 
    }
    
  }
  
}
  
  /*
  Iterator<Particle> it = particles.iterator();
  while (it.hasNext()) {
    Particle p = it.next();
    p.run();
    if (p.isDead()) {
      it.remove();
    }
  }
}
*/



