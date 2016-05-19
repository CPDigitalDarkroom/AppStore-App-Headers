/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:50 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/Spotify-Structs.h>
#import <Spotify/GLUEStyle.h>

@class UIColor, NSString;

@interface GLUETableViewStyle : NSObject <GLUEStyle> {

	UIColor* _backgroundColor;
	float _rowHeight;
	float _estimatedRowHeight;
	int _separatorStyle;
	UIColor* _separatorColor;

}

@property (nonatomic,retain) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) float rowHeight;                        //@synthesize rowHeight=_rowHeight - In the implementation block
@property (assign,nonatomic) float estimatedRowHeight;               //@synthesize estimatedRowHeight=_estimatedRowHeight - In the implementation block
@property (assign,nonatomic) int separatorStyle;                     //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (nonatomic,retain) UIColor * separatorColor;               //@synthesize separatorColor=_separatorColor - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * debugName; 
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(id)init;
-(void)setRowHeight:(float)arg1 ;
-(float)rowHeight;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)separatorColor;
-(void)setSeparatorStyle:(int)arg1 ;
-(void)setSeparatorColor:(UIColor *)arg1 ;
-(int)separatorStyle;
-(void)setEstimatedRowHeight:(float)arg1 ;
-(float)estimatedRowHeight;
@end

