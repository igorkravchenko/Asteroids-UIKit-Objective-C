
@import UIKit;
@interface HudView : UIView

- (instancetype)initWithSize:(CGSize)size;
- (void)setScore:(NSInteger)value;
- (void)setLives:(NSInteger)value;

@end