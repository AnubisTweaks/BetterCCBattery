#import <QuartzCore/QuartzCore.h>
#import <UIKit/UIKit.h>

@interface CCUIButtonModuleView : UIControl

-(BOOL)isSelected;

@property (retain, nonatomic) NSString* glyphState;
@property (retain, nonatomic) CALayer* layer;

@end

@interface CCUIToggleViewController : UIViewController

@property (retain, nonatomic) CCUIButtonModuleView* module;
@property (retain, nonatomic) NSString* glyphState;
-(void)touchesEnded:(id)arg1 forEvent:(id)arg2;

// Created Properties

-(void)refreshIcon;
-(CGRect)changeWidthOf:(CGRect)rect to:(CGFloat)width;

@property (retain, nonatomic) UILabel* percentLabel;

// This layer contains the sublayers for longBatteryBar, shortBatteryBar, wellBatteryBar and <CALayer name="tip" .../>
@property (retain, nonatomic) CALayer* batteryLayer;

// internally <CALayer name="yellow long guy that gets short" .../>
@property (retain, nonatomic) CALayer* longBatteryBar;

// internally <CALayer name="white short guy that gets long" .../>
@property (retain, nonatomic) CALayer* shortBatteryBar;

// internally <CALayer name="well" .../>
@property (retain, nonatomic) CALayer* wellBatteryBar;

@end

// @interface CALayer
//
// // @property (copy) NSArray * states;
// -(id)stateWithName:(id)arg1;
//
// @end

@interface CAState : NSObject
-(NSArray *)elements;
@end

// @interface CAStateSetValue : NSObject
// -(void)setValue:(CGRect)arg1 ;
// -(CGRect)value;
// @end
