/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:47 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol SPTTinkerbellManager;
@class SPTTinkerbellStoryRegistryImplementation, NSArray, SPTTableView, NSString;

@interface SPTTinkerbellDebugStoriesPageController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	id<SPTTinkerbellManager> _manager;
	SPTTinkerbellStoryRegistryImplementation* _storyRegistry;
	NSArray* _stories;

}

@property (nonatomic,readonly) id<SPTTinkerbellManager> manager;                                      //@synthesize manager=_manager - In the implementation block
@property (nonatomic,readonly) SPTTinkerbellStoryRegistryImplementation * storyRegistry;              //@synthesize storyRegistry=_storyRegistry - In the implementation block
@property (nonatomic,retain) NSArray * stories;                                                       //@synthesize stories=_stories - In the implementation block
@property (nonatomic,readonly) SPTTableView * tableView; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SPTTinkerbellStoryRegistryImplementation *)storyRegistry;
-(void)setStories:(NSArray *)arg1 ;
-(NSArray *)stories;
-(id)storyForSection:(int)arg1 ;
-(char)isResetStoryRowAtIndexPath:(id)arg1 ;
-(id)itemForIndexPath:(id)arg1 ;
-(void)resetStateOfItems:(id)arg1 ;
-(id)initWithManager:(id)arg1 storyRegistry:(id)arg2 ;
-(id<SPTTinkerbellManager>)manager;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(void)loadView;
-(SPTTableView *)tableView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(char)arg1 ;
@end

