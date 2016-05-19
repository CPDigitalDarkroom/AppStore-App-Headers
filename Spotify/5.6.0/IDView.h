/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:23 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/IDFlushProtocol.h>

@protocol IDViewDelegate;
@class NSString, IDApplication, NSMutableSet, IDModel, NSLock;

@interface IDView : NSObject <IDFlushProtocol> {

	char _focused;
	char _visible;
	char _focusedDirty;
	char _titleDirty;
	char _performLumDirty;
	char _titleIdDirty;
	NSString* _title;
	int _titleId;
	IDApplication* _application;
	id<IDViewDelegate> _delegate;
	int _hmiState;
	int _focusEvent;
	NSMutableSet* _widgets;
	IDModel* _titleModel;
	NSLock* _widgetsLock;

}

@property (nonatomic,copy) NSString * title;                                  //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) int titleId;                                     //@synthesize titleId=_titleId - In the implementation block
@property (assign,nonatomic,__weak) IDApplication * application;              //@synthesize application=_application - In the implementation block
@property (assign,nonatomic,__weak) id<IDViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isFocused,nonatomic) char focused;                   //@synthesize focused=_focused - In the implementation block
@property (assign,getter=isVisible,nonatomic) char visible;                   //@synthesize visible=_visible - In the implementation block
@property (assign,nonatomic) int hmiState;                                    //@synthesize hmiState=_hmiState - In the implementation block
@property (nonatomic,readonly) int focusEvent;                                //@synthesize focusEvent=_focusEvent - In the implementation block
@property (nonatomic,readonly) NSMutableSet * widgets;                        //@synthesize widgets=_widgets - In the implementation block
@property (nonatomic,readonly) IDModel * titleModel;                          //@synthesize titleModel=_titleModel - In the implementation block
@property (assign,nonatomic) char focusedDirty;                               //@synthesize focusedDirty=_focusedDirty - In the implementation block
@property (assign,nonatomic) char titleDirty;                                 //@synthesize titleDirty=_titleDirty - In the implementation block
@property (assign,nonatomic) char performLumDirty;                            //@synthesize performLumDirty=_performLumDirty - In the implementation block
@property (assign,nonatomic) char titleIdDirty;                               //@synthesize titleIdDirty=_titleIdDirty - In the implementation block
@property (readonly) NSLock * widgetsLock;                                    //@synthesize widgetsLock=_widgetsLock - In the implementation block
-(void)performLastUserMode;
-(void)hmiDidStopForApplication:(id)arg1 ;
-(id)initWithHmiState:(int)arg1 titleModel:(id)arg2 focusEvent:(int)arg3 ;
-(void)addWidget:(id)arg1 ;
-(void)removeWidget:(id)arg1 ;
-(int)hmiState;
-(int)focusEvent;
-(void)setNeedsFlush;
-(void)hmiDidStartForApplication:(id)arg1 ;
-(void)focusCallback:(id)arg1 ;
-(void)visibleCallback:(id)arg1 ;
-(NSLock *)widgetsLock;
-(IDModel *)titleModel;
-(void)setTitleDirty:(char)arg1 ;
-(int)titleId;
-(void)setTitleIdDirty:(char)arg1 ;
-(void)setPerformLumDirty:(char)arg1 ;
-(char)performLumDirty;
-(char)titleDirty;
-(char)titleIdDirty;
-(void)setTitleId:(int)arg1 ;
-(void)setHmiState:(int)arg1 ;
-(char)focusedDirty;
-(void)setFocusedDirty:(char)arg1 ;
-(void)setApplication:(IDApplication *)arg1 ;
-(void)setDelegate:(id<IDViewDelegate>)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id<IDViewDelegate>)delegate;
-(NSString *)title;
-(int)priority;
-(char)isFocused;
-(void)setVisible:(char)arg1 ;
-(char)isVisible;
-(void)flush:(int)arg1 ;
-(NSMutableSet *)widgets;
-(void)setFocused:(char)arg1 ;
-(IDApplication *)application;
@end

