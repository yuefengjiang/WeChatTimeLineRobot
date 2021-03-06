/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "POPPropertyAnimation.h"


@interface POPSpringAnimation : POPPropertyAnimation {
}
@property(assign, nonatomic) float dynamicsMass;
@property(assign, nonatomic) float dynamicsFriction;
@property(assign, nonatomic) float dynamicsTension;
@property(assign, nonatomic) float springSpeed;
@property(assign, nonatomic) float springBounciness;
@property(copy, nonatomic) id velocity;
+(id)animationWithPropertyNamed:(id)propertyNamed;
+(id)animation;
+(void)convertTension:(float)tension friction:(float)friction toBounciness:(float*)bounciness speed:(float*)speed;
+(void)convertBounciness:(float)bounciness speed:(float)speed toTension:(float*)tension friction:(float*)friction mass:(float*)mass;
-(void)_appendDescription:(id)description debug:(BOOL)debug;
-(void)_updatedDynamicsMass;
-(void)_updatedDynamicsFriction;
-(void)_updatedDynamicsTension;
-(void)setSolver:(SpringSolver<POP::Vector4<double> >*)solver;
-(SpringSolver<POP::Vector4<double> >*)solver;
-(void)dealloc;
-(id)init;
-(void)_initState;
-(id)copyWithZone:(NSZone*)zone;
@end

