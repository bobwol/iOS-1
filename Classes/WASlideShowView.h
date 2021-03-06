//  Copyright 2011 WidgetAvenue - Librelio. All rights reserved.


#import <UIKit/UIKit.h>
#import "WAModuleProtocol.h"

typedef enum {
	SlideShowTransitionNone,
	SlideShowTransitionMoveIn,
	SlideShowTransitionDissolve
} SlideShowTransition;


@interface WASlideShowView : UIView <UIScrollViewDelegate,UIGestureRecognizerDelegate, WAModuleProtocol>{

	NSArray *imagePathArray;
	NSString *urlString;
	UIScrollView *scrollView;
	UIImageView * view1;
	UIImageView * view2;
	SlideShowTransition transition;
	NSTimer * timer;
	int repeat;
	int timerCount;
	UIViewController* currentViewController;
	
	
	
}
@property (nonatomic, retain) UIScrollView *scrollView;
@property (nonatomic, retain) UIImageView *view1;
@property (nonatomic, retain) UIImageView *view2;
@property (nonatomic, retain) NSTimer * timer;
@property SlideShowTransition transition;
@property int repeat;
@property int timerCount;

- (void)handleSingleTap:(UITapGestureRecognizer *)recognizer;
- (void) resetSlideShow;

@end

