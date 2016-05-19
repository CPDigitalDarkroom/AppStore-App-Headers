/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:35 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class SPTGeniusAnnotation, NSRegularExpression;

@interface SPTGeniusCardView : UIView {

	SPTGeniusAnnotation* _annotation;
	NSRegularExpression* _lineBreakingPattern;

}

@property (nonatomic,retain) SPTGeniusAnnotation * annotation;                       //@synthesize annotation=_annotation - In the implementation block
@property (nonatomic,retain) NSRegularExpression * lineBreakingPattern;              //@synthesize lineBreakingPattern=_lineBreakingPattern - In the implementation block
-(NSRegularExpression *)lineBreakingPattern;
-(char)pattern:(id)arg1 inString:(id)arg2 ;
-(id)repairLineBreaksFromPattern:(id)arg1 inAttributedString:(id)arg2 byLayoutManager:(id)arg3 forTextView:(id)arg4 ;
-(int)linesBeginWithPattern:(id)arg1 inAttributedString:(id)arg2 byLayoutManager:(id)arg3 ;
-(void)setLineBreakingPattern:(NSRegularExpression *)arg1 ;
-(id)initWithAnnotation:(id)arg1 ;
-(SPTGeniusAnnotation *)annotation;
-(void)setAnnotation:(SPTGeniusAnnotation *)arg1 ;
@end

